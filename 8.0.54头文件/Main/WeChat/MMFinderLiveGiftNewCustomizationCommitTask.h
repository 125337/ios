@interface MMFinderLiveGiftNewCustomizationCommitTask : NSObject
{
    BOOL _modifyNewCustomText; // +0x8
    NSString * _giftProductId; // +0x10
    NSString * _customText; // +0x18
    NSArray * _componentKeyList; // +0x20
    id /* block */ _callback; // +0x28
}
- (id)giftProductId;
- (void)setGiftProductId:(id)arg1;
- (BOOL)modifyNewCustomText;
- (void)setModifyNewCustomText:(BOOL)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (id)componentKeyList;
- (void)setComponentKeyList:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

