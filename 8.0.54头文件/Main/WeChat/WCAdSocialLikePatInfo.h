@interface WCAdSocialLikePatInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _supportDoubleClick; // +0x8
    NSString * _numberRequestId; // +0x10
    WCAdPagInfo * _cheerIconPag; // +0x18
    WCAdPagInfo * _cheerIconPagDark; // +0x20
    NSArray * _fullScreenPagList; // +0x28
    double _fullScreenCanCloseDelayTime; // +0x30
    double _fullScreenVibrateDelayTime; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)numberRequestId;
- (void)setNumberRequestId:(id)arg1;
- (id)cheerIconPag;
- (void)setCheerIconPag:(id)arg1;
- (id)cheerIconPagDark;
- (void)setCheerIconPagDark:(id)arg1;
- (id)fullScreenPagList;
- (void)setFullScreenPagList:(id)arg1;
- (double)fullScreenCanCloseDelayTime;
- (void)setFullScreenCanCloseDelayTime:(double)arg1;
- (double)fullScreenVibrateDelayTime;
- (void)setFullScreenVibrateDelayTime:(double)arg1;
- (BOOL)supportDoubleClick;
- (void)setSupportDoubleClick:(BOOL)arg1;
- (void).cxx_destruct;
@end

