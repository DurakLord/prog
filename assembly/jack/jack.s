				.global _start
				.global _write
				.global _exit

				.text

		_start:

			call _write
			jmp _exit

