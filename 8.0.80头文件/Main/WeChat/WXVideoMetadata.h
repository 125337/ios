@interface WXVideoMetadata : NSObject
{
    BOOL _isSoftEncodeMetaData; // +0x8
    BOOL _isHardEncodeMetaData; // +0x9
    NSMutableDictionary * _extraInfo; // +0x10
    NSString * _abaInfo; // +0x18
    NSString * _aigcTagContent; // +0x20
}
+ (id)metadataWithWXTag;
+ (id)metadataFromAsset:(id)arg1;
+ (id)getExtraInfoFromAsset:(id)arg1;
+ (id)finderMediaSyncErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)finderMediaSyncUUIDData;
+ (id)finderMediaSyncUUIDPayloadDataWithValue:(id)arg1 error:(id *)arg2;
+ (id)finderMediaSyncUUIDPayloadOffsetAtFilePath:(id)arg1;
+ (id)UUIDBoxMetadataStringForFilePath:(id)arg1;
+ (id)finderMediaSyncCredentialFromVideoFilePath:(id)arg1;
+ (BOOL)writeFinderMediaSyncUUIDPayloadData:(id)arg1 filePath:(id)arg2 error:(id *)arg3;
+ (BOOL)appendFinderMediaSyncUUIDPlaceholderAtFilePath:(id)arg1 error:(id *)arg2;
+ (BOOL)prepareFinderMediaSyncUUIDPlaceholderWithSourceFilePath:(id)arg1 destinationFilePath:(id)arg2 error:(id *)arg3;
+ (void)writeFinderMediaSyncCredential:(id)arg1 videoFilePath:(id)arg2 completion:(id /* block */)arg3;
+ (id)metadataFromAssetABA:(id)arg1;
+ (id)generateABAMetadataValueWithAdaptiveBitrateUp:(long long)arg1 adaptiveBitrateDown:(long long)arg2 isCompressed:(BOOL)arg3 isSoftEncoder:(BOOL)arg4 isFromMaas:(BOOL)arg5;
+ (BOOL)isAIGCMetadataItem:(id)arg1;
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
- (BOOL)containsABAFlag:(id)arg1 assetURL:(id)arg2;
- (BOOL)isContainsABAFlagWithAVFoundation:(id)arg1;
- (BOOL)isContainsABAFlagWithFFmpeg:(id)arg1;
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
- (id)aigcTagContent;
- (void)setAigcTagContent:(id)arg1;
- (void).cxx_destruct;
@end
