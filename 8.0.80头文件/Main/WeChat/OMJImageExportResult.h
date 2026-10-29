@interface OMJImageExportResult : NSObject
{
    NSDictionary * _outputImageFilePathsBySceneID; // +0x8
    NSDictionary * _outputVideoFilePathsBySceneID; // +0x10
}
- (id)initWithOutputImageFilePathsBySceneID:(id)arg1 outputVideoFilePathsBySceneID:(id)arg2;
- (id)description;
- (id)outputImageFilePathsBySceneID;
- (id)outputVideoFilePathsBySceneID;
- (void).cxx_destruct;
@end
