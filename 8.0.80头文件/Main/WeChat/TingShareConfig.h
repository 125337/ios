@interface TingShareConfig : NSObject
{
    long long _shareType; // +0x8
    long long _shareScene; // +0x10
    NSNumber * _multiSelect; // +0x18
    NSNumber * _blockGroupChat; // +0x20
    NSNumber * _blockSendToWeWork; // +0x28
    NSArray * _toUsernameList; // +0x30
    NSNumber * _needConfirm; // +0x38
}
+ (id)makeWithShareType:(long long)arg1 shareScene:(long long)arg2 multiSelect:(id)arg3 blockGroupChat:(id)arg4 blockSendToWeWork:(id)arg5 toUsernameList:(id)arg6 needConfirm:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)shareType;
- (void)setShareType:(long long)arg1;
- (long long)shareScene;
- (void)setShareScene:(long long)arg1;
- (id)multiSelect;
- (void)setMultiSelect:(id)arg1;
- (id)blockGroupChat;
- (void)setBlockGroupChat:(id)arg1;
- (id)blockSendToWeWork;
- (void)setBlockSendToWeWork:(id)arg1;
- (id)toUsernameList;
- (void)setToUsernameList:(id)arg1;
- (id)needConfirm;
- (void)setNeedConfirm:(id)arg1;
- (void).cxx_destruct;
@end
