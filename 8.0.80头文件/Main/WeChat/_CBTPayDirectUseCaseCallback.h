@interface _CBTPayDirectUseCaseCallback : NSObject <MMUseCaseCallback>
{
    NSString * _useCaseName; // +0x8
    _CBTPayDirectUseCaseCallback * _selfRetain; // +0x10
}
+ (id)makeSelfRetainedWithUseCaseName:(id)arg1;
- (void)call:(id)arg1;
- (id)useCaseName;
- (void)setUseCaseName:(id)arg1;
- (id)selfRetain;
- (void)setSelfRetain:(id)arg1;
- (void).cxx_destruct;
@end
