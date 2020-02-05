#pragma once

struct lister {
	long l_id;
	unsigned char aby_data[8];
	long count;
	struct lister* ptr;
};



class rlist {
public:

private:
};


/////

//
//struct lister* dlist;
//dlist = (struct lister*)malloc(sizeof(struct lister));
//lister* readArr::add(lister* dl, long l_id, unsigned char aby_data[8]) {
//	lister* p, * temp;
//	temp = (struct lister*)malloc(sizeof(struct lister));
//	p = dl->ptr;
//	temp->l_id = l_id;
//	for (int i = 0; i < 8; i++) {
//		temp->aby_data[i] = aby_data[i];
//	}
//	temp->count = 1;
//	temp->ptr = p;
//	dl->ptr = temp;
//	sizelist++;
//	return temp;
//}
//
//lister* readArr::edit(lister* dl, long l_id) {
//	lister* temp;
//	temp = (struct lister*)malloc(sizeof(struct lister));
//	temp = dl;
//	int i = 0;
//	while (i < sizelist) {
//
//	}
//
//	return 0;
//}
//
//int readArr::update(lister* dl, long l_id) {
//	lister* temp;
//	int count = 0;
//	temp = (struct lister*)malloc(sizeof(struct lister));
//	temp = dl;
//	int i = 0;
//	while (i < sizelist) {
//		if ((temp->l_id != l_id)) {
//			temp = temp->ptr;
//			count++;
//		}
//		else {
//
//			return count;
//		}
//	}
//
//	return -1;
//}
//
//lister* readArr::del(lister* dl, long l_id) {
//	lister* p, * temp;
//	temp = (struct lister*)malloc(sizeof(struct lister));
//
//	return 0;
//}
//
//
//
//dlist->l_id = 18000000;
//dlist->aby_data[0] = 'a';
//dlist->count = 1;
//dlist->ptr = NULL;
//unsigned char ddt[8];
//ddt[0] = 'b';
//add(dlist, 18000001, ddt);
//
//lister* buff;
//buff = (struct lister*)malloc(sizeof(struct lister));
//buff = dlist->ptr;
//Sleep(100);
//
//
