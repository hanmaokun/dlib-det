/*
	hanmaokun@outlook.com
*/

#ifndef FHOG_SVM_DETECTOR_H_
#define FHOG_SVM_DETECTOR_H_

extern bool isfile(const char* str);

// Return [0, 0, 0, 0] if not detected, [left, top, right, bottom] if detected.
extern const int* fhog_svm_det(const char* img_path, const char* model_path, int length);

extern int test_dlib_add(int x, int y);

#endif // FHOG_SVM_DETECTOR_H_
