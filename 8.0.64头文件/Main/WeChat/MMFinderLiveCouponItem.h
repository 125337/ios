@interface MMFinderLiveCouponItem : NSObject <WCFinderLiveLogReportValueProvider, NSCopying>
{
    BOOL _anchorSending; // +0x8
    BOOL _isDuringReceiving; // +0x9
    int _type; // +0xc
    int _sourceType; // +0x10
    FinderShopCouponInfo * _couponInfo; // +0x18
    long long _scene; // +0x20
    NSString * _stockId; // +0x28
    NSString * _discount; // +0x30
    NSArray * _valueWording; // +0x38
    NSString * _title; // +0x40
    unsigned long long _remainCount; // +0x48
    NSString * _source; // +0x50
    NSString * _dueDate; // +0x58
    NSString * _useCondition; // +0x60
    NSHashTable * _observers; // +0x68
}
- (BOOL)isValidForNotice;
- (id)validItemForNotice;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)initWithCouponInfo:(id)arg1;
- (id)genDiscount;
- (id)genValueWording;
- (id)audienceButtonWording;
- (BOOL)audienceReceived;
- (id)pb;
- (void)onFinderCouponReceivedEvent:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)isInstantDiscountActivity;
- (id)couponInfo;
- (void)setCouponInfo:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)stockId;
- (void)setStockId:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)discount;
- (void)setDiscount:(id)arg1;
- (id)valueWording;
- (void)setValueWording:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)remainCount;
- (void)setRemainCount:(unsigned long long)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)dueDate;
- (void)setDueDate:(id)arg1;
- (id)useCondition;
- (void)setUseCondition:(id)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (BOOL)anchorSending;
- (void)setAnchorSending:(BOOL)arg1;
- (BOOL)isDuringReceiving;
- (void)setIsDuringReceiving:(BOOL)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (void).cxx_destruct;
@end
