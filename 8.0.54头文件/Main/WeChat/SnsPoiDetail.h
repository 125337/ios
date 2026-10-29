@interface SnsPoiDetail : WXPBGeneratedMessage
+ (void)initialize;
- (id)mainAddressName;
- (id)detailAddressNameWithOnlyShowPoiName:(BOOL)arg1 addressSubType:(int)arg2;
- (id)categoryTipsString;
- (id)priceTipsString;
- (id)businessHourString;
- (id)removeNewline:(id)arg1;
- (id)phoneString;
- (unsigned int)getScaleWithDefaultValueIfSvrNotFilled;
- (id)getDisplayAddressNameWithOnlyShowPoiName:(BOOL)arg1;
@end

