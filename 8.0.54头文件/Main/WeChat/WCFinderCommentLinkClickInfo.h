@interface WCFinderCommentLinkClickInfo : NSObject
{
    long long _type; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    NSMutableDictionary * _userInfo; // +0x18
    NSString * _url; // +0x20
}
+ (id)infoFromTextLinkUrl:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

