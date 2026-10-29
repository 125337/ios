@interface MJMovieComposingDraft : NSObject <PBCoding>
{
    BOOL _isFromAlbum; // +0x8
    OMCProject * _project; // +0x10
    unsigned long long _maasSDKVersion; // +0x18
    long long _entryScene; // +0x20
    NSString * _publisherSessionID; // +0x28
    unsigned long long _narrationType; // +0x30
    OMJAssetInfo * _originAssetInfo; // +0x38
    NSArray * _originAssetInfos; // +0x40
    NSArray * _originAssets; // +0x48
    OMJAspectRatio * _originAspectRatio; // +0x50
    NSData * _assetClassifyResult; // +0x58
    MJVocalAdjustmentCache * _vocalAdjustmentCache; // +0x60
    MJAssetAnalysisReportInfo * _realShotReportInfo; // +0x68
    NSData * _projectData; // +0x70
    NSArray * _assetDraftModels; // +0x78
    NSData * _aspectRatioData; // +0x80
    NSDictionary * _vocalAdjustmentParamsModels; // +0x88
    MJAssetAnalysisReportInfoModel * _realShotReportInfoModel; // +0x90
}
+ (void)PBArrayAdd_isFromAlbum;
+ (void)PBArrayAdd_maasSDKVersion;
+ (void)PBArrayAdd_assetClassifyResult;
+ (void)PBArrayAdd_projectData;
+ (void)PBArrayAdd_assetDraftModels;
+ (void)PBArrayAdd_publisherSessionID;
+ (void)PBArrayAdd_aspectRatioData;
+ (void)PBArrayAdd_entryScene;
+ (void)PBArrayAdd_vocalAdjustmentParamsModels;
+ (void)PBArrayAdd_narrationType;
+ (void)PBArrayAdd_realShotReportInfoModel;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)identifier;
- (BOOL)prepareBeforePBCoding;
- (BOOL)isMaasSDKVersionCompatible;
- (BOOL)restoreAfterPBCoding;
- (void)fetchOriginAssets;
- (void)saveVocalAdjustmentCache;
- (void)loadVocalAdjustmentCache;
- (id)description;
- (id)project;
- (void)setProject:(id)arg1;
- (unsigned long long)maasSDKVersion;
- (void)setMaasSDKVersion:(unsigned long long)arg1;
- (BOOL)isFromAlbum;
- (void)setIsFromAlbum:(BOOL)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (id)publisherSessionID;
- (void)setPublisherSessionID:(id)arg1;
- (unsigned long long)narrationType;
- (void)setNarrationType:(unsigned long long)arg1;
- (id)originAssetInfo;
- (void)setOriginAssetInfo:(id)arg1;
- (id)originAssetInfos;
- (void)setOriginAssetInfos:(id)arg1;
- (id)originAssets;
- (void)setOriginAssets:(id)arg1;
- (id)originAspectRatio;
- (void)setOriginAspectRatio:(id)arg1;
- (id)assetClassifyResult;
- (void)setAssetClassifyResult:(id)arg1;
- (id)vocalAdjustmentCache;
- (void)setVocalAdjustmentCache:(id)arg1;
- (id)realShotReportInfo;
- (void)setRealShotReportInfo:(id)arg1;
- (id)projectData;
- (void)setProjectData:(id)arg1;
- (id)assetDraftModels;
- (void)setAssetDraftModels:(id)arg1;
- (id)aspectRatioData;
- (void)setAspectRatioData:(id)arg1;
- (id)vocalAdjustmentParamsModels;
- (void)setVocalAdjustmentParamsModels:(id)arg1;
- (id)realShotReportInfoModel;
- (void)setRealShotReportInfoModel:(id)arg1;
- (void).cxx_destruct;
@end

