while getopts s: flag
do
    case "${flag}" in
        s) spk=${OPTARG};;
    esac
done
echo "SonarProjectKey: $spk";
sed -i '' -e "s/SPK/${spk}/g" sonar-project.properties