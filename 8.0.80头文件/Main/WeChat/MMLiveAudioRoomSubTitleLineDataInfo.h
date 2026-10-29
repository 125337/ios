@interface MMLiveAudioRoomSubTitleLineDataInfo : NSObject
{
    BOOL _useFullCornerRadius; // +0x8
    BOOL _representsCancelledSubtitle; // +0x9
    NSString * _avatarURL; // +0x10
    NSString * _nickname; // +0x18
    NSString * _content; // +0x20
}
- (id)avatarURL;
- (void)setAvatarURL:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)useFullCornerRadius;
- (void)setUseFullCornerRadius:(BOOL)arg1;
- (BOOL)representsCancelledSubtitle;
- (void)setRepresentsCancelledSubtitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
