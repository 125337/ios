@interface WCAdFireworkCheerInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCAdColorInfo * _likedColor; // +0x8
    WCAdColorInfo * _likeButtonBgColor; // +0x10
    WCAdColorInfo * _likeButtonBgHighlightedColor; // +0x18
    NSString * _fireworkNormalIcon; // +0x20
    NSString * _fireworkNormalIconDark; // +0x28
    NSString * _fireworkLikedIcon; // +0x30
    NSString * _fireworkLikedIconDark; // +0x38
    WCAdPagInfo * _fireworkIconPag; // +0x40
    double _attractDelayTime; // +0x48
    WCAdPagInfo * _attractPag; // +0x50
    double _vibrateDelayTime; // +0x58
    double _refreshTime; // +0x60
    NSString * _commentDescHint; // +0x68
    WCAdPagInfo * _fullScreenPag; // +0x70
    double _fullScreenCanCloseDelayTime; // +0x78
    WCAdFireworkCheerTopLikeAreaInfo * _topLikeAreaInfo; // +0x80
    NSString * _bottomButtonTitle; // +0x88
    WCAdFireworkCheerTagInfo * _tagInfo; // +0x90
    WCAdFireworkCheerGuideHalfScreenInfo * _guideHalfScreenInfo; // +0x98
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchFireworkNormalIcon;
- (id)fetchFireworkNormalIconEscapingForXML;
- (id)fetchFireworkLikedIcon;
- (id)fetchFireworkLikedIconEscapingForXML;
- (id)fetchLikedColor;
- (id)fetchLikedColorHexValue;
- (id)fetchLikeButtonBgColor;
- (id)fetchLikeButtonBgHighlightedColor;
- (id)likedColor;
- (void)setLikedColor:(id)arg1;
- (id)likeButtonBgColor;
- (void)setLikeButtonBgColor:(id)arg1;
- (id)likeButtonBgHighlightedColor;
- (void)setLikeButtonBgHighlightedColor:(id)arg1;
- (id)fireworkNormalIcon;
- (void)setFireworkNormalIcon:(id)arg1;
- (id)fireworkNormalIconDark;
- (void)setFireworkNormalIconDark:(id)arg1;
- (id)fireworkLikedIcon;
- (void)setFireworkLikedIcon:(id)arg1;
- (id)fireworkLikedIconDark;
- (void)setFireworkLikedIconDark:(id)arg1;
- (id)fireworkIconPag;
- (void)setFireworkIconPag:(id)arg1;
- (double)attractDelayTime;
- (void)setAttractDelayTime:(double)arg1;
- (id)attractPag;
- (void)setAttractPag:(id)arg1;
- (double)vibrateDelayTime;
- (void)setVibrateDelayTime:(double)arg1;
- (double)refreshTime;
- (void)setRefreshTime:(double)arg1;
- (id)commentDescHint;
- (void)setCommentDescHint:(id)arg1;
- (id)fullScreenPag;
- (void)setFullScreenPag:(id)arg1;
- (double)fullScreenCanCloseDelayTime;
- (void)setFullScreenCanCloseDelayTime:(double)arg1;
- (id)topLikeAreaInfo;
- (void)setTopLikeAreaInfo:(id)arg1;
- (id)bottomButtonTitle;
- (void)setBottomButtonTitle:(id)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (id)guideHalfScreenInfo;
- (void)setGuideHalfScreenInfo:(id)arg1;
- (void).cxx_destruct;
@end
