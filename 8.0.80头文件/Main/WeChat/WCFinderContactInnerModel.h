@interface WCFinderContactInnerModel : NSObject <WCTColumnCoding, PBCoding>
{
    FinderIdentityInfo * _userInfo; // +0x8
    WCFinderContactFansInteractionData * _fansInteractionData; // +0x10
}
+ (void)PBArrayAdd_userInfo;
+ (void)PBArrayAdd_fansInteractionData;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)fansInteractionData;
- (id)archivedWCTValue;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)setFansInteractionData:(id)arg1;
- (void).cxx_destruct;
@end
