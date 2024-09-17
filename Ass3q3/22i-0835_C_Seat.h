#pragma once


class seat {
	int seatno;
public:
	seat() {
		seatno = 0;
	}
	seat(int x) {
		seatno = x;
	}

	void setSeatNo(int x) {
		seatno = x;
	}

	int getSeatNo() {
		return seatno;
	}
};