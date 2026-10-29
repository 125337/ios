@interface WCAdDynamicAttr : NSObject <NSCoding>
{
    WCAdCommonConfig * _commonConfig; // +0x8
    WCAdDynamicFeedInfluentDataInfo * _influentData; // +0x10
    WCAdBulletScreenInfo * _adBulletScreenInfo; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)commonConfig;
- (void)setCommonConfig:(id)arg1;
- (id)influentData;
- (void)setInfluentData:(id)arg1;
- (id)adBulletScreenInfo;
- (void)setAdBulletScreenInfo:(id)arg1;
- (void).cxx_destruct;
@end

