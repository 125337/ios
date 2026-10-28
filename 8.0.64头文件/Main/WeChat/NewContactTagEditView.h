@interface NewContactTagEditView : FavTagEditView
{
    double m_textFieldMinWidth; // +0xa8
}
- (double)getTextFieldMinWidth;
- (id)getDefaultTitleFont;
- (double)getButtonHeight;
- (unsigned int)getMaxTagLength;
@end
