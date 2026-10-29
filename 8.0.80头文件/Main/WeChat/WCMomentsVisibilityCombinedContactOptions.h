@interface WCMomentsVisibilityCombinedContactOptions : NSObject
{
    BOOL _hideSelfContact; // +0x8
    BOOL _hideFavourContact; // +0x9
    BOOL _showHistoryGroup; // +0xa
    BOOL _showContactTag; // +0xb
    NSDictionary * _existContactDic; // +0x10
    NSDictionary * _ignoreContactDic; // +0x18
    NSDictionary * _disabledContactDic; // +0x20
    unsigned long long _memberCountLimit; // +0x28
    NSString * _overLimitToast; // +0x30
    NSString * _overLimitAlert; // +0x38
    unsigned long long _scene; // +0x40
    unsigned long long _groupScene; // +0x48
    unsigned long long _commonSearchScene; // +0x50
    unsigned long long _reportBizType; // +0x58
}
- (id)init;
- (id)existContactDic;
- (void)setExistContactDic:(id)arg1;
- (id)ignoreContactDic;
- (void)setIgnoreContactDic:(id)arg1;
- (id)disabledContactDic;
- (void)setDisabledContactDic:(id)arg1;
- (unsigned long long)memberCountLimit;
- (void)setMemberCountLimit:(unsigned long long)arg1;
- (id)overLimitToast;
- (void)setOverLimitToast:(id)arg1;
- (id)overLimitAlert;
- (void)setOverLimitAlert:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)groupScene;
- (void)setGroupScene:(unsigned long long)arg1;
- (unsigned long long)commonSearchScene;
- (void)setCommonSearchScene:(unsigned long long)arg1;
- (BOOL)hideSelfContact;
- (void)setHideSelfContact:(BOOL)arg1;
- (BOOL)hideFavourContact;
- (void)setHideFavourContact:(BOOL)arg1;
- (BOOL)showHistoryGroup;
- (void)setShowHistoryGroup:(BOOL)arg1;
- (BOOL)showContactTag;
- (void)setShowContactTag:(BOOL)arg1;
- (unsigned long long)reportBizType;
- (void)setReportBizType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
