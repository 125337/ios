@interface MMWebSameLayerViewIdentity : NSObject
{
    NSDictionary * m_dict; // +0x8
}
- (id)initWithDict:(id)arg1;
- (BOOL)checkData;
- (unsigned int)viewId;
- (BOOL)isSameView:(CGRect)arg1;
- (CGRect)targetFrame;
- (double)maxDiff;
- (id)description;
- (void).cxx_destruct;
@end
