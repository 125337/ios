@interface WCFinderUserPoiInfo : NSObject
{
    SnsPoiDetail * _snsPoiDetail; // +0x8
    NSString * _highlightName; // +0x10
    NSString * _highlightAddress; // +0x18
    NSString * _normalName; // +0x20
    NSString * _normalAddress; // +0x28
    NSString * _normalDetail; // +0x30
    NSMutableArray * _highlightNameKeywords; // +0x38
    NSMutableArray * _highlightAddressKeywords; // +0x40
}
+ (id)finderPOIInfo:(id)arg1;
- (void)processHighlightName;
- (void)processHighlightAddress;
- (id)snsPoiDetail;
- (void)setSnsPoiDetail:(id)arg1;
- (id)highlightName;
- (void)setHighlightName:(id)arg1;
- (id)highlightAddress;
- (void)setHighlightAddress:(id)arg1;
- (id)normalName;
- (void)setNormalName:(id)arg1;
- (id)normalAddress;
- (void)setNormalAddress:(id)arg1;
- (id)normalDetail;
- (void)setNormalDetail:(id)arg1;
- (id)highlightNameKeywords;
- (void)setHighlightNameKeywords:(id)arg1;
- (id)highlightAddressKeywords;
- (void)setHighlightAddressKeywords:(id)arg1;
- (void).cxx_destruct;
@end

