@interface KaraFeatureCenter_Text_Tokenizer : NSObject
{
    shared_ptr<Kara::FeatureCenter::Text::FullTokenizer> _tokenizer; // +0x8
}
- (id)initWithVacabulary:(id)arg1;
- (id)tokenize:(id)arg1 maxLength:(long long)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
