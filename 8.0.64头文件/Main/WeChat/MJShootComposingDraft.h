@interface MJShootComposingDraft : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _isAIGCTaskCompleted; // +0x8
    NSString * _identifier; // +0x10
    unsigned long long _maasSDKVersion; // +0x18
    NSString * _aigcTaskID; // +0x20
    NSString * _templateID; // +0x28
    NSString * _coverImageFilePath; // +0x30
    NSString * _clipbundleDirID; // +0x38
    long long _entryScene; // +0x40
    unsigned long long _draftType; // +0x48
    long long _cameraPosition; // +0x50
    NSString * _phAssetID; // +0x58
    double _creationTimeInterval; // +0x60
}
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_maasSDKVersion;
+ (void)PBArrayAdd_aigcTaskID;
+ (void)PBArrayAdd_templateID;
+ (void)PBArrayAdd_coverImageFilePath;
+ (void)PBArrayAdd_clipbundleDirID;
+ (void)PBArrayAdd_entryScene;
+ (void)PBArrayAdd_draftType;
+ (void)PBArrayAdd_cameraPosition;
+ (void)PBArrayAdd_phAssetID;
+ (void)PBArrayAdd_isAIGCTaskCompleted;
+ (void)PBArrayAdd_creationTimeInterval;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)prepareBeforePBCodingIfNeeded;
- (BOOL)restoreAfterPBCodingIfNeeded;
- (BOOL)isMaasSDKVersionCompatible;
- (id)description;
- (id)archivedWCTValue;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (unsigned long long)maasSDKVersion;
- (void)setMaasSDKVersion:(unsigned long long)arg1;
- (id)aigcTaskID;
- (void)setAigcTaskID:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)coverImageFilePath;
- (void)setCoverImageFilePath:(id)arg1;
- (id)clipbundleDirID;
- (void)setClipbundleDirID:(id)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (unsigned long long)draftType;
- (void)setDraftType:(unsigned long long)arg1;
- (long long)cameraPosition;
- (void)setCameraPosition:(long long)arg1;
- (id)phAssetID;
- (void)setPhAssetID:(id)arg1;
- (BOOL)isAIGCTaskCompleted;
- (void)setIsAIGCTaskCompleted:(BOOL)arg1;
- (double)creationTimeInterval;
- (void)setCreationTimeInterval:(double)arg1;
- (void).cxx_destruct;
@end
