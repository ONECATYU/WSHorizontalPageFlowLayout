<h4>将系统FlowLayout布局形式调整为右图形式</h4>
<img style="height: 280px" src="screenshots/97A92BD0-2499-491A-80D6-78605F9F7BE8.jpeg"/>
<h4>适用场景:</h4>
<table style="text-align: center">
    <tr>
        <td>自定义表情键盘</td>
        <td>左右滑动的菜单项</td>
    </tr>
    <tr>
        <td><img style="height: 200px" src="screenshots/F239AF03-7E1D-4ABF-B25F-C10E929B81C4.png"/></td>
        <td><img style="height: 200px" src="screenshots/F4C1F778-DEF8-45BE-83B5-39E3DD223099.jpeg"/></td>
    </tr>
</table>
<h4>你可通过设置以下属性来达到预期效果:</h4>

```objective-c  

///Mark: 内容的偏移量(包括区头的左右)
@property (nonatomic, assign) UIEdgeInsets contentInset;

///Mark: 以下属性可通过UICollectionViewDelegateFlowLayout协议方法对每个section单独设置
///Mark: section的偏移量,通过这个属性设置统一的偏移
@property (nonatomic, assign) UIEdgeInsets sectionInset;

@property (nonatomic, assign) CGFloat minimumLineSpacing;
@property (nonatomic, assign) CGFloat minimumInteritemSpacing;

@property (nonatomic, assign) CGSize itemSize;

@property (nonatomic, assign) CGSize headerReferenceSize;
@property (nonatomic, assign) CGSize footerReferenceSize;  

```
