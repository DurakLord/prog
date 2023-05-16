import mariadb
import sys

job = {"docter", "teacher", "surger", "baker", "fisher", "hacker", "scientist"}

name = {"Yusif", "Lala", "Jack", "Daniel", "Abdul", "Jafar"}

cache = {100, 20, 40, 60, 800, 804, 90, 70}

habit = {"dancing", "singing", "fighting", "playing"}

id = 0

try:
    db = mariadb.connect(
        user = "root",
        password = "faridjk",
        host = "localhost",
        database =  "chrono"
    )

except mariadb.Error as e:
    print("Error connecting to Maria platform: {e}")
    sys.exit(1)

cmd = db.cursor()

cmd.execute("DROP TABLE customers;")
cmd.execute("CREATE TABLE customers(id int, name varchar(255), cache int, job varchar(255), habit varchar(255));")




for x in name:
    for y in cache:
        for z in job:
            for t in habit:
                line = "INSERT INTO customers(id, name, cache, job, habit) VALUES (%d, %s, %d, %s, %s);"
                val = (id, x, y, z, t)
                cmd.execute(line, val)
                db.commit()
                id = id + 1