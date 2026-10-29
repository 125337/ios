@interface WXVideoMetadata : NSObject
{
    BOOL _isSoftEncodeMetaData; // +0x8
    BOOL _isHardEncodeMetaData; // +0x9
    NSMutableDictionary * _extraInfo; // +0x10
    NSString * _abaInfo; // +0x18
}
+ (id)metadataWithWXTag;
+ (id)metadataFromAsset:(id)arg1;
+ (id)getExtraInfoFromAsset:(id)arg1;
+ (id)metadataFromAssetABA:(id)arg1;
+ (id)generateABAMetadataValueWithAdaptiveBitrateUp:(long long)arg1 adaptiveBitrateDown:(long long)arg2 isCompressed:(BOOL)arg3 isSoftEncoder:(BOOL)arg4 isFromMaas:(BOOL)arg5;
- (BOOL)addExtraInfo:(id)arg1 forKey:(id)arg2;
- (BOOL)addExtraInfos:(id)arg1;
- (id)extraInfoForKey:(id)arg1;
- (BOOL)getWXCompressFlag;
- (int)containsExtraInfo;
- (unsigned int)getCreatedWXVersion;
- (id)generateMetadataFromExtraInfo;
- (BOOL)addToWriter:(id)arg1;
- (BOOL)addToExportSession:(id)arg1;
- (BOOL)addToWriterABA:(id)arg1 ABA:(int)arg2 ABA:(int)arg3;
- (BOOL)containsABAFlag:(id)arg1;
- (void)checkSoftEncodeMetadata:(id)arg1;
- (id)stringFromByte:(unsigned char)arg1;
- (BOOL)containskSoftEncodeMetadata:(id)arg1;
- (BOOL)containskHardEncodeMetadata:(id)arg1;
- (id)getWXMetadata:(int)arg1 ABAFlagDown:(int)arg2;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)abaInfo;
- (void)setAbaInfo:(id)arg1;
- (BOOL)isSoftEncodeMetaData;
- (void)setIsSoftEncodeMetaData:(BOOL)arg1;
- (BOOL)isHardEncodeMetaData;
- (void)setIsHardEncodeMetaData:(BOOL)arg1;
- (void).cxx_destruct;
@end

