@interface EcsKfProductCardData : NSObject <NSCopying>
{
    NSString * _cardTitleText; // +0x8
    NSString * _cardJumpInfoBase64; // +0x10
    NSArray * _products; // +0x18
    NSArray * _buttonWords; // +0x20
    NSArray * _buttonHintWords; // +0x28
    NSArray * _buttonColors; // +0x30
    NSArray * _buttonUrls; // +0x38
    NSArray * _buttonWeappUsernames; // +0x40
    NSArray * _buttonWeappPaths; // +0x48
    NSArray * _buttonEcsJumpInfos; // +0x50
    NSString * _hideTitle; // +0x58
    NSString * _hideTitleAndTime; // +0x60
    NSString * _reportExtraInfoJson; // +0x68
    long long _updateTimeMs; // +0x70
}
- (id)init;
- (BOOL)isValid;
- (id)productIds;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)cardTitleText;
- (void)setCardTitleText:(id)arg1;
- (id)cardJumpInfoBase64;
- (void)setCardJumpInfoBase64:(id)arg1;
- (id)products;
- (void)setProducts:(id)arg1;
- (id)buttonWords;
- (void)setButtonWords:(id)arg1;
- (id)buttonHintWords;
- (void)setButtonHintWords:(id)arg1;
- (id)buttonColors;
- (void)setButtonColors:(id)arg1;
- (id)buttonUrls;
- (void)setButtonUrls:(id)arg1;
- (id)buttonWeappUsernames;
- (void)setButtonWeappUsernames:(id)arg1;
- (id)buttonWeappPaths;
- (void)setButtonWeappPaths:(id)arg1;
- (id)buttonEcsJumpInfos;
- (void)setButtonEcsJumpInfos:(id)arg1;
- (id)hideTitle;
- (void)setHideTitle:(id)arg1;
- (id)hideTitleAndTime;
- (void)setHideTitleAndTime:(id)arg1;
- (id)reportExtraInfoJson;
- (void)setReportExtraInfoJson:(id)arg1;
- (long long)updateTimeMs;
- (void)setUpdateTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end
