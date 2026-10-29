@interface MMVideoItemProvider : MMBaseItemProvider
{
    NSString * _filePath; // +0x8
    NSString * _fileName; // +0x10
}
+ (id)writableTypeIdentifiersForItemProvider;
- (id)initWithFilePath:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)description;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (void).cxx_destruct;
@end
