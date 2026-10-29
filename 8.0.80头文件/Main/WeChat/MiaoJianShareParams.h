@interface MiaoJianShareParams : NSObject
{
    BOOL _isAutoExpandTemplate; // +0x8
    int _exportedOpenWX; // +0xc
    long long _launchType; // +0x10
    long long _editTab; // +0x18
    NSArray * _assetIdList; // +0x20
    NSString * _templateId; // +0x28
    NSString * _musicId; // +0x30
    NSString * _miaojianExtInfo; // +0x38
    NSString * _creationProjectStr; // +0x40
    NSURLQueryItem * _queryItemForScene; // +0x48
    NSURLQueryItem * _queryItemForLaunchType; // +0x50
    NSURLQueryItem * _queryItemForEditTab; // +0x58
    NSURLQueryItem * _queryItemForAssetIdList; // +0x60
    NSURLQueryItem * _queryItemForIsAutoExpandTemplate; // +0x68
    NSURLQueryItem * _queryItemForTemplateId; // +0x70
    NSURLQueryItem * _queryItemForMusicId; // +0x78
    NSURLQueryItem * _queryItemForMiaoJianExtInfo; // +0x80
    NSURLQueryItem * _queryItemForCreationProjectStr; // +0x88
    NSURLQueryItem * _queryItemForExportedOpenWX; // +0x90
    NSMutableArray * _queryItemListForExtKV; // +0x98
}
- (id)initWithLaunchType:(long long)arg1;
- (void)setLaunchType:(long long)arg1;
- (void)setEditTab:(long long)arg1;
- (void)setAssetIdList:(id)arg1;
- (void)setIsAutoExpandTemplate:(BOOL)arg1;
- (void)setTemplateId:(id)arg1;
- (void)setMusicId:(id)arg1;
- (void)setMiaojianExtInfo:(id)arg1;
- (void)setCreationProjectStr:(id)arg1;
- (void)setExportedOpenWX:(int)arg1;
- (void)addExtValue:(id)arg1 forKey:(id)arg2;
- (void)removeExtValuefromKey:(id)arg1;
- (void)clearExtKV;
- (id)description;
- (long long)launchType;
- (long long)editTab;
- (BOOL)isAutoExpandTemplate;
- (int)exportedOpenWX;
- (id)assetIdList;
- (id)templateId;
- (id)musicId;
- (id)miaojianExtInfo;
- (id)creationProjectStr;
- (id)queryItemForScene;
- (void)setQueryItemForScene:(id)arg1;
- (id)queryItemForLaunchType;
- (void)setQueryItemForLaunchType:(id)arg1;
- (id)queryItemForEditTab;
- (void)setQueryItemForEditTab:(id)arg1;
- (id)queryItemForAssetIdList;
- (void)setQueryItemForAssetIdList:(id)arg1;
- (id)queryItemForIsAutoExpandTemplate;
- (void)setQueryItemForIsAutoExpandTemplate:(id)arg1;
- (id)queryItemForTemplateId;
- (void)setQueryItemForTemplateId:(id)arg1;
- (id)queryItemForMusicId;
- (void)setQueryItemForMusicId:(id)arg1;
- (id)queryItemForMiaoJianExtInfo;
- (void)setQueryItemForMiaoJianExtInfo:(id)arg1;
- (id)queryItemForCreationProjectStr;
- (void)setQueryItemForCreationProjectStr:(id)arg1;
- (id)queryItemForExportedOpenWX;
- (void)setQueryItemForExportedOpenWX:(id)arg1;
- (id)queryItemListForExtKV;
- (void)setQueryItemListForExtKV:(id)arg1;
- (void).cxx_destruct;
@end
