/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIImageView, UILongPressGestureRecognizer, NSString, PSSpecifier;

@interface PSTableCell : UITableViewCell  {
    id _value;
    UIImageView *_checkedImageView;
    BOOL _checked;
    BOOL _shouldHideTitle;
    NSString *_hiddenTitle;
    int _alignment;
    SEL _pAction;
    id _pTarget;
    BOOL _cellEnabled;
    PSSpecifier *_specifier;
    int _type;
    BOOL _lazyIcon;
    BOOL _lazyIconDontUnload;
    BOOL _lazyIconForceSynchronous;
    NSString *_lazyIconAppID;
    BOOL _reusedCell;
    BOOL _isCopyable;
    UILongPressGestureRecognizer *_longTapRecognizer;
}

@property int type;
@property(retain) PSSpecifier * specifier;
@property BOOL reusedCell;
@property BOOL isCopyable;
@property(retain) UILongPressGestureRecognizer * longTapRecognizer;

+ (int)cellTypeFromString:(id)arg1;
+ (id)reuseIdentifierForBasicCellTypes:(int)arg1;
+ (id)reuseIdentifierForClassAndType:(int)arg1;
+ (id)stringFromCellType:(int)arg1;
+ (Class)cellClassForSpecifier:(id)arg1;
+ (id)reuseIdentifierForSpecifier:(id)arg1;
+ (int)cellStyle;

- (void)setLongTapRecognizer:(id)arg1;
- (id)longTapRecognizer;
- (void)setIsCopyable:(BOOL)arg1;
- (BOOL)isCopyable;
- (BOOL)reusedCell;
- (BOOL)cellEnabled;
- (id)getIcon;
- (id)titleTextLabel;
- (SEL)cellAction;
- (id)cellTarget;
- (void)setCellAction:(SEL)arg1;
- (void)setCellTarget:(id)arg1;
- (id)iconImageView;
- (id)valueLabel;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)setCellEnabled:(BOOL)arg1;
- (id)getLazyIconID;
- (id)getLazyIcon;
- (id)blankIcon;
- (void)setShouldHideTitle:(BOOL)arg1;
- (void)longPressed:(id)arg1;
- (id)_copyableText;
- (BOOL)canBeChecked;
- (void)cellRemovedFromView;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setReusedCell:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2;
- (BOOL)canReload;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setAlignment:(int)arg1;
- (void)setType:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (BOOL)isChecked;
- (float)textFieldOffset;
- (void)setIcon:(id)arg1;
- (void)copy:(id)arg1;
- (void)setAction:(SEL)arg1;
- (id)_contentString;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)titleLabel;
- (BOOL)canBecomeFirstResponder;
- (id)scriptingInfoWithChildren;
- (id)_automationID;
- (SEL)action;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setChecked:(BOOL)arg1;
- (void)layoutSubviews;
- (int)type;
- (void)setValue:(id)arg1;
- (id)value;
- (id)target;

@end
