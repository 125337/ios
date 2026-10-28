@interface DSMMatcher : NSObject
{
    int _scene; // +0x8
    unsigned int _groupCount; // +0xc
    unsigned int _keywordCount; // +0x10
    unsigned int _keywordMaxLen; // +0x14
    unsigned int _kwm_length; // +0x18
    id <DSMMatcherDelegate> _delegate; // +0x20
    NSString * _modelPath; // +0x28
    NSData * _mmapData; // +0x30
    char * _kwm_data; // +0x38
}
- (id)initWithModelPath:(id)arg1 delegate:(id)arg2 scene:(int)arg3;
- (void)dealloc;
- (void)buildSearchModel;
- (BOOL)readModelFromFile;
- (BOOL)buildModelFromKeywords;
- (void)initMetaData;
- (unsigned int)initPretreat:(unsigned short *)arg1;
- (BOOL)createKeywordModel;
- (void)fillKeywordModelData;
- (BOOL)writeKeywordModel;
- (int)search:(id)arg1 location:(unsigned int)arg2 result:(id)arg3;
- (id)extractKeywords:(id)arg1;
- (id)extractKeywords:(id)arg1 maxSearchCount:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)modelPath;
- (void)setModelPath:(id)arg1;
- (unsigned int)groupCount;
- (void)setGroupCount:(unsigned int)arg1;
- (unsigned int)keywordCount;
- (void)setKeywordCount:(unsigned int)arg1;
- (unsigned int)keywordMaxLen;
- (void)setKeywordMaxLen:(unsigned int)arg1;
- (id)mmapData;
- (void)setMmapData:(id)arg1;
- (char *)kwm_data;
- (void)setKwm_data:(char *)arg1;
- (unsigned int)kwm_length;
- (void)setKwm_length:(unsigned int)arg1;
- (void).cxx_destruct;
@end
