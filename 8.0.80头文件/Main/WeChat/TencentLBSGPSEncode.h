@interface TencentLBSGPSEncode : NSObject
{
    double _casm_rr; // +0x8
    double _casm_t1; // +0x10
    double _casm_t2; // +0x18
    double _casm_x1; // +0x20
    double _casm_y1; // +0x28
    double _casm_x2; // +0x30
    double _casm_y2; // +0x38
    double _casm_f; // +0x40
}
- (id)init;
- (double)yj_sin2:(double)arg1;
- (double)Transform_yj5Withx:(double)arg1 withy:(double)arg2;
- (double)Transform_yjy5Withx:(double)arg1 withy:(double)arg2;
- (double)Transform_jy5Withx:(double)arg1 withy:(double)arg2;
- (double)Transform_jyj5Withx:(double)arg1 withy:(double)arg2;
- (double)random_yj;
- (void)IniCasmWithT:(double)arg1 withLg:(double)arg2 withLa:(double)arg3;
- (id)wgtochina_lbwithFlag:(int)arg1 withLg:(int)arg2 withLa:(int)arg3 withh:(int)arg4 withW:(int)arg5 withT:(int)arg6;
- (BOOL)isValid:(long long)arg1;
- (id)getEncryPointwithlng:(double)arg1 withlat:(double)arg2;
- (CLLocationCoordinate2D)getEncryCoord:(CLLocationCoordinate2D)arg1;
- (double)casm_rr;
- (void)setCasm_rr:(double)arg1;
- (double)casm_t1;
- (void)setCasm_t1:(double)arg1;
- (double)casm_t2;
- (void)setCasm_t2:(double)arg1;
- (double)casm_x1;
- (void)setCasm_x1:(double)arg1;
- (double)casm_y1;
- (void)setCasm_y1:(double)arg1;
- (double)casm_x2;
- (void)setCasm_x2:(double)arg1;
- (double)casm_y2;
- (void)setCasm_y2:(double)arg1;
- (double)casm_f;
- (void)setCasm_f:(double)arg1;
@end
