#ifndef ANAK_H
#define ANAk_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "anak \"" << nama << "\" ada\n";
	}
	~anak() {
		cout << "anak \"" << nama << "\" tidak ada\n";
	}
};
3endif
