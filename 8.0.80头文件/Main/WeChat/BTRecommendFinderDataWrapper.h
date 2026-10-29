@interface BTRecommendFinderDataWrapper : NSObject
{
    int _subType; // +0x8
    NSArray * _finderDataArr; // +0x10
    NSString * _cardId; // +0x18
    NSString * _title; // +0x20
    NSString * _fromSessionIdInfo; // +0x28
}
- (BOOL)isValid;
- (id)recFinderCardDataArr;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)finderDataArr;
- (void)setFinderDataArr:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)fromSessionIdInfo;
- (void)setFromSessionIdInfo:(id)arg1;
- (void).cxx_destruct;
@end
