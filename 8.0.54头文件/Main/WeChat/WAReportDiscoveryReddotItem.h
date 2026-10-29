@interface WAReportDiscoveryReddotItem : WAReportBaseItem
{
    BOOL _hasRedDot; // +0x8
    unsigned int _actionType; // +0xc
    unsigned int _version; // +0x10
    unsigned int _redDotTipsId; // +0x14
    NSString * _redDotUniqueId; // +0x18
    NSString * _redDotTitle; // +0x20
}
- (int)reportID;
- (id)reportString;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (BOOL)hasRedDot;
- (void)setHasRedDot:(BOOL)arg1;
- (id)redDotUniqueId;
- (void)setRedDotUniqueId:(id)arg1;
- (id)redDotTitle;
- (void)setRedDotTitle:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)redDotTipsId;
- (void)setRedDotTipsId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

