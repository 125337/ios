@interface FlutterAccountPlugin : NSObject <IHeadImageExt, MessageObserverDelegate, MMFlutterPlugin, FlutterAccountHost>
{
    NSMutableDictionary * _m_map; // +0x8
    NSMutableDictionary * _m_user_name_map; // +0x10
    NSMutableDictionary * _headImgDownloadMap; // +0x18
    NSMutableDictionary * _m_loadInfoMap; // +0x20
    NSMutableArray * _m_contacts; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)getUinWithError:(id *)arg1;
- (void)getAvatarInfoUsername:(id)arg1 hd:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)removeForwardUserInfo:(id)arg1 error:(id *)arg2;
- (void)getRecentForwardUserInfoMaxCount:(long long)arg1 ignoreChatRoom:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)getDisplayNameUsername:(id)arg1 error:(id *)arg2;
- (id)getSelfUsernameWithError:(id *)arg1;
- (void)getUserInfoUsername:(id)arg1 hd:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onHeadImageChange:(id)arg1;
- (id)isTeenModeWithError:(id *)arg1;
- (id)isOverseaUserWithError:(id *)arg1;
- (void)p_report31836ContextAction:(unsigned int)arg1;
- (id)m_map;
- (id)m_user_name_map;
- (id)headImgDownloadMap;
- (void)setHeadImgDownloadMap:(id)arg1;
- (id)m_loadInfoMap;
- (id)m_contacts;
- (void)setM_contacts:(id)arg1;
- (void).cxx_destruct;
@end

