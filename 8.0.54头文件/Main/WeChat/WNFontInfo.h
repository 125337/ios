@interface WNFontInfo : NSObject <PBCoding>
{
    NSString * _displayName; // +0x8
    NSString * _familyName; // +0x10
    NSString * _fileName; // +0x18
    NSString * _zipFilePath; // +0x20
}
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_familyName;
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_zipFilePath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithFavFontResourceInfo:(id)arg1 andFileName:(id)arg2 andZipFilePath:(id)arg3;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)familyName;
- (void)setFamilyName:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)zipFilePath;
- (void)setZipFilePath:(id)arg1;
- (void).cxx_destruct;
@end

