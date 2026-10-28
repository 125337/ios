@interface FICImageTableMetadata : NSObject <PBCoding>
{
    unsigned int m_entryCount; // +0x8
    unsigned int m_maxLRUFactor; // +0xc
    NSString * m_metadataPath; // +0x10
    MMFICImageFormat * m_imgFormat; // +0x18
    NSMutableDictionary * m_entries; // +0x20
    MemoryMappedKV * m_entriesKV; // +0x28
    NSMutableOrderedSet * m_MRUEntries; // +0x30
    NSMutableIndexSet * m_unoccupiedIndexes; // +0x38
    unsigned int _imgSizeWidth; // +0x40
    unsigned int _imgSizeHeight; // +0x44
    unsigned int _imgMaxCnt; // +0x48
    unsigned int _cpuzSize; // +0x4c
    unsigned int _pageSize; // +0x50
    unsigned int _version; // +0x54
    unsigned int _FICVersion; // +0x58
    NSString * _formatName; // +0x60
}
+ (void)PBArrayAdd_formatName;
+ (void)PBArrayAdd_imgSizeWidth;
+ (void)PBArrayAdd_imgSizeHeight;
+ (void)PBArrayAdd_imgMaxCnt;
+ (void)PBArrayAdd_cpuzSize;
+ (void)PBArrayAdd_pageSize;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_FICVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithMetadataPath:(id)arg1 imgFormat:(id)arg2;
- (BOOL)loadMetadata;
- (BOOL)saveMetadata;
- (void)setMaxLRUFactor:(unsigned int)arg1;
- (void)setEntryCount:(unsigned int)arg1;
- (void)reset;
- (unsigned long long)indexOfEntryForEntityUUID:(id)arg1;
- (void)deleteEntryForEntityUUID:(id)arg1;
- (void)newEntryWithEntityUUID:(id)arg1 entryIndex:(unsigned long long)arg2;
- (unsigned long long)nextEntryIndex;
- (void)entryWasAccessedWithEntityUUID:(id)arg1;
- (void)setEntityInUse:(BOOL)arg1 entityUUID:(id)arg2;
- (BOOL)isAnyEntityInUsed;
- (id)entries;
- (unsigned int)entryCount;
- (unsigned int)maxLRUFactor;
- (id)formatName;
- (void)setFormatName:(id)arg1;
- (unsigned int)imgSizeWidth;
- (void)setImgSizeWidth:(unsigned int)arg1;
- (unsigned int)imgSizeHeight;
- (void)setImgSizeHeight:(unsigned int)arg1;
- (unsigned int)imgMaxCnt;
- (void)setImgMaxCnt:(unsigned int)arg1;
- (unsigned int)cpuzSize;
- (void)setCpuzSize:(unsigned int)arg1;
- (unsigned int)pageSize;
- (void)setPageSize:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)FICVersion;
- (void)setFICVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
