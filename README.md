# 2016_advanced_c_struct_2
结构体上机作业1、2班

1、
【问题描述】设有3个候选人（zhangxiao，wangman,lisheng），现有已填写好的10张选票，每张选票只有一个候选人名字。完成一个程序统计每名候选人的选票是多少，并按照得票从多到少进行排序和输出。
【输入形式】输入10张选票中的内容
zhangxiao
lisheng
zhangxiao
wangman
zhangxiao
wangman
wangman
lisheng
zhangxiao
zhangxiao
【输出形式】按得票从多到少进行排序输出，每个候选人占一行，行内信息用空格隔开
zhangxiao 5
wangman 3
lisheng 2

2、	
【问题描述】公司要登录新一批员工的资料，分别有姓名，性别，年龄，以及学历，并给信息以姓名进行排序，由字母表顺序排列并输出，相同开头字母按照输入顺序排列。
【输入形式】输入n名员工，输入员工资料
【输出形式】输出排完序的员工信息，每个员工信息占一行
【样例输入】
4
uusbf man primary
iwuhnf women highschool
sdfj man middleschool
unnaksndf women highschool
【样例输出】
iwuhnf women highschool
sdfj man middleschool
uusbf man primary
unnaksndf women highschool

3、
【问题描述】某小商场进行合法营销（商场原本有的是钱），请通过结构体输入连续三个月的进货净购入金额（万元）、净销售金额（万元）和本月执勤员工数量（千人）。净收入（销售-购入）不超过20万不收取稅用，20-50万收取15%，50万以上收取25%。净销售的40%分给员工发工资。请通过主函数输入并计算三个月所交总稅用，以及三个月每月员工工资（每一千个员工收到工资相等）并判断三个月商场是否亏损，亏损yes 不亏损 no。
【输入形式】（购入 销售 员工）x3
【输出形式】总稅用 工资1 工资2 工资3 是否亏损 
【样例输入】
  20 200 20
  23 234 4
  123 45678 90
【样例输出】11486.50 4.00 23.40 203.01 no

4、
【问题描述】警方小滔怀疑小栋在进行非法活动，于是仔细勘察了现场，发现了疑似小栋留给黑暗科学家小圳的坐标地址。样例代码为A 3854751357  4317546873  2333770033.(共十个数字)小滔发现小栋是一个极其迷信的人，他非常的讨厌数字3和数字7，请大家编写一个可以存储N个样例代码的程序，并且输出时去掉所有的3和7.
【输入形式】输入N，再输入N个样例代码的名称，再输入三行样样例代码数字。（要求用结构体存放样例代码名称和代码数字串）
【输出形式】输出样例代码名字，输出三行没有3和7 的一串数字。（共N个）。
【样例输入】
3
A 
3854751357
4317546873
2333770033
B 
1003333333
1007777777
2007777777
C 
2777777777
5637777777
2649877777
【样例输出】
A 
854515
4154683
200
B
100
100
200
C
2
56
26498

5、
【问题描述】某停车场有5个车位（1-5号），设计一个程序，实现停车场计费（每停车1个小时收费10块钱，不超过一小时的按一小时收费）。
【输入形式】输入5个车位的车辆信息包括：车位号，车牌号，进入时间，离开时间。
（要求！将时间定义为一个结构体类型，采用24小时制，使用嵌套结构体类型定义车辆信息。）
【输出形式】输出车辆信息包括：车位号，车牌号，计费
【样例输入】
1 L-0055 7 20 10 50
2 B-8455 7 50 8 40
3 H-5267 6 35 11 55
4 U-3712 6 25 8 05
5 M-2426 7 05 9 10
【样例输出】
1 L-0055 40
2 B-8455 10
3 H-5267 60
4 U-3712 20
5 M-2426 30
