@interface EcsGiftStatusInfoForUpdate : NSObject
{
    NSString * _statusWording; // +0x8
    NSNumber * _statusStyle; // +0x10
    NSNumber * _statusVersion; // +0x18
    NSNumber * _status; // +0x20
    NSString * _detailStatusWording; // +0x28
}
+ (id)makeWithStatusWording:(id)arg1 statusStyle:(id)arg2 statusVersion:(id)arg3 status:(id)arg4 detailStatusWording:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)statusWording;
- (void)setStatusWording:(id)arg1;
- (id)statusStyle;
- (void)setStatusStyle:(id)arg1;
- (id)statusVersion;
- (void)setStatusVersion:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)detailStatusWording;
- (void)setDetailStatusWording:(id)arg1;
- (void).cxx_destruct;
@end
