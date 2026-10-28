@interface BizChattingJumpInfo : NSObject
{
    NSString * _userName; // +0x8
    NSNumber * _openChattingFromScene; // +0x10
    NSNumber * _chattingSubScene; // +0x18
    NSNumber * _clickPos; // +0x20
    NSNumber * _msgLocalId; // +0x28
}
+ (id)makeWithUserName:(id)arg1 openChattingFromScene:(id)arg2 chattingSubScene:(id)arg3 clickPos:(id)arg4 msgLocalId:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)openChattingFromScene;
- (void)setOpenChattingFromScene:(id)arg1;
- (id)chattingSubScene;
- (void)setChattingSubScene:(id)arg1;
- (id)clickPos;
- (void)setClickPos:(id)arg1;
- (id)msgLocalId;
- (void)setMsgLocalId:(id)arg1;
- (void).cxx_destruct;
@end
