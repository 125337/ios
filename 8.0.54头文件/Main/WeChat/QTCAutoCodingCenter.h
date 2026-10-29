@interface QTCAutoCodingCenter : NSObject
{
    NSMutableDictionary * _typeEncodingToCls; // +0x8
}
+ (id)center;
- (id)init;
- (void)registerObjcTypeWrapperClass:(Class)arg1;
- (Class)classForObjcType:(id)arg1;
- (id)typeEncodingToCls;
- (void)setTypeEncodingToCls:(id)arg1;
- (void).cxx_destruct;
@end

