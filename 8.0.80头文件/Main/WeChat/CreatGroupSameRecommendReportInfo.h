@interface CreatGroupSameRecommendReportInfo : NSObject
{
    BOOL _isClickAction; // +0x8
    unsigned int _appearType; // +0xc
    unsigned int _groupListNum; // +0x10
    unsigned int _groupIndex; // +0x14
    NSString * _groupUserName; // +0x18
}
- (unsigned int)appearType;
- (void)setAppearType:(unsigned int)arg1;
- (unsigned int)groupListNum;
- (void)setGroupListNum:(unsigned int)arg1;
- (unsigned int)groupIndex;
- (void)setGroupIndex:(unsigned int)arg1;
- (id)groupUserName;
- (void)setGroupUserName:(id)arg1;
- (BOOL)isClickAction;
- (void)setIsClickAction:(BOOL)arg1;
- (void).cxx_destruct;
@end
