@interface BoxBizFinderJumpInfo : NSObject
{
    NSNumber * _scene; // +0x8
    BoxBizFinderLiveInfo * _targetInfo; // +0x10
    NSArray * _allInfoList; // +0x18
}
+ (id)makeWithScene:(id)arg1 targetInfo:(id)arg2 allInfoList:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)targetInfo;
- (void)setTargetInfo:(id)arg1;
- (id)allInfoList;
- (void)setAllInfoList:(id)arg1;
- (void).cxx_destruct;
@end
