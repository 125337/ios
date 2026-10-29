@interface WCAdLiteAppInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _isHalfScreen; // +0x8
    BOOL _enableDragToCloseInHalfScreen; // +0x9
    NSString * _appId; // +0x10
    NSString * _page; // +0x18
    NSString * _query; // +0x20
    NSString * _minVersion; // +0x28
    double _heightPercent; // +0x30
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (BOOL)enableDragToCloseInHalfScreen;
- (void)setEnableDragToCloseInHalfScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
