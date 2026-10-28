@interface MMMusicCheckPermissionResult : NSObject
{
    BOOL _canCreate; // +0x8
    BOOL _chatroomEnabled; // +0x9
    NSString * _songId; // +0x10
    NSString * _statusVerifyInfo; // +0x18
}
- (id)description;
- (BOOL)canCreate;
- (void)setCanCreate:(BOOL)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)statusVerifyInfo;
- (void)setStatusVerifyInfo:(id)arg1;
- (BOOL)chatroomEnabled;
- (void)setChatroomEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
