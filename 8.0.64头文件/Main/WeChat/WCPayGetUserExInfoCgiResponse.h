@interface WCPayGetUserExInfoCgiResponse : NSObject
{
    BOOL _needArea; // +0x8
    BOOL _needProfession; // +0x9
    BOOL _needNationality; // +0xa
    NSArray * _professions; // +0x10
    NSArray * _nationalityExcludeArray; // +0x18
}
- (BOOL)needArea;
- (void)setNeedArea:(BOOL)arg1;
- (BOOL)needProfession;
- (void)setNeedProfession:(BOOL)arg1;
- (id)professions;
- (void)setProfessions:(id)arg1;
- (BOOL)needNationality;
- (void)setNeedNationality:(BOOL)arg1;
- (id)nationalityExcludeArray;
- (void)setNationalityExcludeArray:(id)arg1;
- (void).cxx_destruct;
@end
