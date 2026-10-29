@interface WNTextUrlData : NSObject
{
    NSURL * _url; // +0x8
    NSString * _linkStr; // +0x10
    _NSRange _range; // +0x18
}
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)linkStr;
- (void)setLinkStr:(id)arg1;
- (void).cxx_destruct;
@end

