@interface MJShootRedPacketTransParams : NSObject
{
    BOOL _notUseCache; // +0x8
    int _cdnAppType; // +0xc
    int _enterScene; // +0x10
    int _action; // +0x14
    int _postScene; // +0x18
    NSString * _templateID; // +0x20
    NSString * _postSessionID; // +0x28
    NSString * _postCoverID; // +0x30
}
- (id)initWithTemplateID:(id)arg1 cdnAppType:(int)arg2 enterScene:(int)arg3 action:(int)arg4 notUseCache:(BOOL)arg5 postScene:(int)arg6 postSessionID:(id)arg7 postCoverID:(id)arg8;
- (id)description;
- (id)templateID;
- (int)cdnAppType;
- (int)enterScene;
- (int)action;
- (BOOL)notUseCache;
- (int)postScene;
- (id)postSessionID;
- (id)postCoverID;
- (void).cxx_destruct;
@end
