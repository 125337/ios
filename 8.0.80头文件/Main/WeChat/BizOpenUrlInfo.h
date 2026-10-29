@interface BizOpenUrlInfo : NSObject
{
    NSNumber * _msgId; // +0x8
    NSNumber * _svrId; // +0x10
    NSNumber * _pos; // +0x18
    NSNumber * _posInCard; // +0x20
    NSNumber * _openScene; // +0x28
    NSNumber * _subScene; // +0x30
    NSString * _url; // +0x38
    NSNumber * _itemShowType; // +0x40
    NSString * _userName; // +0x48
    NSString * _nickName; // +0x50
    NSString * _title; // +0x58
    NSString * _coverUrl; // +0x60
    NSNumber * _bizFinderEnterId; // +0x68
    NSString * _rankSessionId; // +0x70
    NSNumber * _msgLocalId; // +0x78
    NSNumber * _bizSessionId; // +0x80
    NSString * _jumpPaths; // +0x88
    NSNumber * _hideShareMenu; // +0x90
}
+ (id)fromBizArticleInfo:(id)arg1;
+ (id)fromBizWebViewArticleInfo:(id)arg1;
+ (id)fromBizPublishArticleInfo:(id)arg1;
+ (id)fromBizMeTabArticleInfo:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)svrId;
- (void)setSvrId:(id)arg1;
- (id)pos;
- (void)setPos:(id)arg1;
- (id)posInCard;
- (void)setPosInCard:(id)arg1;
- (id)openScene;
- (void)setOpenScene:(id)arg1;
- (id)subScene;
- (void)setSubScene:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)bizFinderEnterId;
- (void)setBizFinderEnterId:(id)arg1;
- (id)rankSessionId;
- (void)setRankSessionId:(id)arg1;
- (id)msgLocalId;
- (void)setMsgLocalId:(id)arg1;
- (id)bizSessionId;
- (void)setBizSessionId:(id)arg1;
- (id)jumpPaths;
- (void)setJumpPaths:(id)arg1;
- (id)hideShareMenu;
- (void)setHideShareMenu:(id)arg1;
- (void).cxx_destruct;
@end
