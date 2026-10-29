@interface WCFinderMemberShipDetailInfoRequestParam : NSObject
{
    BOOL _isPreviewMode; // +0x8
    int _commentScene; // +0xc
    NSString * _finderUsername; // +0x10
    NSString * _liveNoticeEncryptedId; // +0x18
}
- (id)description;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)liveNoticeEncryptedId;
- (void)setLiveNoticeEncryptedId:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

