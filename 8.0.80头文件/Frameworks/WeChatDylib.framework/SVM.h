@interface SVM : StatModel
{
    Ptr<cv::ml::SVM> _nativePtrSVM; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::SVM>)arg1;
+ (id)getDefaultGridPtr:(int)arg1;
+ (id)create;
+ (id)load:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::ml::SVM>)arg1;
- (int)getType;
- (void)setType:(int)arg1;
- (double)getGamma;
- (void)setGamma:(double)arg1;
- (double)getCoef0;
- (void)setCoef0:(double)arg1;
- (double)getDegree;
- (void)setDegree:(double)arg1;
- (double)getC;
- (void)setC:(double)arg1;
- (double)getNu;
- (void)setNu:(double)arg1;
- (double)getP;
- (void)setP:(double)arg1;
- (id)getClassWeights;
- (void)setClassWeights:(id)arg1;
- (id)getTermCriteria;
- (void)setTermCriteria:(id)arg1;
- (int)getKernelType;
- (void)setKernel:(int)arg1;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4 Cgrid:(id)arg5 gammaGrid:(id)arg6 pGrid:(id)arg7 nuGrid:(id)arg8 coeffGrid:(id)arg9 degreeGrid:(id)arg10 balanced:(BOOL)arg11;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4 Cgrid:(id)arg5 gammaGrid:(id)arg6 pGrid:(id)arg7 nuGrid:(id)arg8 coeffGrid:(id)arg9 degreeGrid:(id)arg10;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4 Cgrid:(id)arg5 gammaGrid:(id)arg6 pGrid:(id)arg7 nuGrid:(id)arg8 coeffGrid:(id)arg9;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4 Cgrid:(id)arg5 gammaGrid:(id)arg6 pGrid:(id)arg7 nuGrid:(id)arg8;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4 Cgrid:(id)arg5 gammaGrid:(id)arg6 pGrid:(id)arg7;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4 Cgrid:(id)arg5 gammaGrid:(id)arg6;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4 Cgrid:(id)arg5;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3 kFold:(int)arg4;
- (BOOL)trainAuto:(id)arg1 layout:(int)arg2 responses:(id)arg3;
- (id)getSupportVectors;
- (id)getUncompressedSupportVectors;
- (double)getDecisionFunction:(int)arg1 alpha:(id)arg2 svidx:(id)arg3;
- (Ptr<cv::ml::SVM>)nativePtrSVM;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
