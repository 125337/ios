@interface WCCellGroupItem : NSObject
{
    long long m_type; // +0x8
    NSMutableArray * m_arrPhotoDatas; // +0x10
    long long m_year; // +0x18
    NSString * m_nsTip; // +0x20
    NSString * m_nsSubTip; // +0x28
    BOOL _isStarEnabled; // +0x30
    long long _accessoryType; // +0x38
    long long _accessoryContentType; // +0x40
    WCMomentsPageContext * _pageContext; // +0x48
}
+ (long long)groupTypeForDataItem:(id)arg1;
- (id)init;
- (BOOL)isSomeWCDataItemUnsafe;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (long long)m_type;
- (void)setM_type:(long long)arg1;
- (id)m_arrPhotoDatas;
- (void)setM_arrPhotoDatas:(id)arg1;
- (long long)m_year;
- (void)setM_year:(long long)arg1;
- (id)m_nsTip;
- (void)setM_nsTip:(id)arg1;
- (id)m_nsSubTip;
- (void)setM_nsSubTip:(id)arg1;
- (long long)accessoryType;
- (void)setAccessoryType:(long long)arg1;
- (long long)accessoryContentType;
- (void)setAccessoryContentType:(long long)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (BOOL)isStarEnabled;
- (void)setIsStarEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
