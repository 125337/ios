@interface MMHeadImageCacher : MMObject
{
    NSMutableDictionary * _dictUseScene2MemoryCache; // +0x8
    NSCache * _originContactsHeadImgCache; // +0x10
}
- (id)init;
- (id)getHeadImage:(const HeadImgUseSceneConfig *)arg1 usrName:(id)arg2 withCategory:(unsigned char)arg3 retHeadImgIsExistedLocal:(BOOL *)arg4;
- (id)loadImageFromLocal:(id)arg1 withCategory:(unsigned char)arg2 isHD:(BOOL)arg3;
- (BOOL)isHeadImgExistInLocal:(id)arg1;
- (BOOL)isHeadImgExistInLocal:(id)arg1 isHD:(BOOL)arg2;
- (void)moveTmpImageToTargetInLocal:(id)arg1 withCategory:(unsigned char)arg2;
- (void)discardCachedHeadImg:(id)arg1;
- (void)deleteHeadImageForBrand:(id)arg1;
- (void)deleteUsrHeadImg:(id)arg1;
- (void)deleteUsrHDHeadImgFromLocal:(id)arg1;
- (BOOL)saveUsrImgToLocal:(id)arg1 withFile:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4;
- (BOOL)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4 forceReload:(BOOL)arg5 saveAsTemp:(BOOL)arg6;
- (BOOL)saveImgDataToFile:(id)arg1 file:(id)arg2;
- (BOOL)createEmptyUsrImgInLocal:(id)arg1;
- (void)fixSelfHeadImgByLocalImg;
- (void)cleanupAllMemoryCache;
- (unsigned long long)cleanAllHeadImage;
- (id)getImgSavePath:(id)arg1 forCategory:(unsigned char)arg2 isHD:(BOOL)arg3;
- (BOOL)deleteUsrHeadImgFromLocal:(id)arg1 isHD:(BOOL)arg2;
- (void)deleteBrandHeadImageFromLocal:(id)arg1;
- (void)discardCachedHeadImgInMemory:(id)arg1;
- (void)discardCachedHeadImgInFIC:(id)arg1;
- (BOOL)translateHeadImg:(id)arg1 toCategory:(unsigned char)arg2 fromPath:(id)arg3 isHD:(BOOL)arg4;
- (BOOL)translateOldHeadImg:(id)arg1 toCategory:(unsigned char)arg2 isHD:(BOOL)arg3;
- (id)memoryCacheForUseScene:(unsigned char)arg1;
- (void)saveHeadImgToMemoryCacheIfNeed:(const HeadImgUseSceneConfig *)arg1 usrName:(id)arg2 headImg:(id)arg3;
- (void)cleanupTempMemoryCache:(id)arg1;
- (void).cxx_destruct;
@end
