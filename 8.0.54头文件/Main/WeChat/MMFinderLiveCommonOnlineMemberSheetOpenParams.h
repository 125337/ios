@interface MMFinderLiveCommonOnlineMemberSheetOpenParams : NSObject
{
    BOOL _isPK; // +0x8
    BOOL _isDoubleSidePK; // +0x9
    BOOL _isRedSide; // +0xa
    NSArray * _owners; // +0x10
    NSString * _targetOwnerName; // +0x18
}
- (BOOL)isPK;
- (void)setIsPK:(BOOL)arg1;
- (BOOL)isDoubleSidePK;
- (void)setIsDoubleSidePK:(BOOL)arg1;
- (BOOL)isRedSide;
- (void)setIsRedSide:(BOOL)arg1;
- (id)owners;
- (void)setOwners:(id)arg1;
- (id)targetOwnerName;
- (void)setTargetOwnerName:(id)arg1;
- (void).cxx_destruct;
@end

