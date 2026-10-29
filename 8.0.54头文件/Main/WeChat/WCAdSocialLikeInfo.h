@interface WCAdSocialLikeInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _notShowPag; // +0x8
    WCMultiLanguageItem * _cheerText; // +0x10
    WCMultiLanguageItem * _cheerFinishText; // +0x18
    WCMultiLanguageItem * _commentText; // +0x20
    NSString * _cheerIcon; // +0x28
    NSString * _cheerIconDark; // +0x30
    NSString * _likedIcon; // +0x38
    NSString * _likedIconDark; // +0x40
    NSString * _pagAnimationUrl; // +0x48
    NSString * _pagAnimationMD5; // +0x50
    WCAdSocialLikeAttractingInfo * _attractingInfo; // +0x58
    WCAdContinuousLikeInfo * _continuousLikeInfo; // +0x60
    WCAdFireworkCheerInfo * _fireworkCheerInfo; // +0x68
    WCAdSocialLikePatInfo * _patInfo; // +0x70
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchCheerIcon;
- (id)fetchCheerIconEscapingForXML;
- (id)cheerText;
- (void)setCheerText:(id)arg1;
- (id)cheerFinishText;
- (void)setCheerFinishText:(id)arg1;
- (id)commentText;
- (void)setCommentText:(id)arg1;
- (BOOL)notShowPag;
- (void)setNotShowPag:(BOOL)arg1;
- (id)cheerIcon;
- (void)setCheerIcon:(id)arg1;
- (id)cheerIconDark;
- (void)setCheerIconDark:(id)arg1;
- (id)likedIcon;
- (void)setLikedIcon:(id)arg1;
- (id)likedIconDark;
- (void)setLikedIconDark:(id)arg1;
- (id)pagAnimationUrl;
- (void)setPagAnimationUrl:(id)arg1;
- (id)pagAnimationMD5;
- (void)setPagAnimationMD5:(id)arg1;
- (id)attractingInfo;
- (void)setAttractingInfo:(id)arg1;
- (id)continuousLikeInfo;
- (void)setContinuousLikeInfo:(id)arg1;
- (id)fireworkCheerInfo;
- (void)setFireworkCheerInfo:(id)arg1;
- (id)patInfo;
- (void)setPatInfo:(id)arg1;
- (void).cxx_destruct;
@end

